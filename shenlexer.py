import re

from pygments.lexer import RegexLexer, bygroups
from pygments.token import Comment, String, Punctuation, Keyword, Name, \
    Operator, Number, Text, Generic, Whitespace, Literal


class ShenLexer(RegexLexer):
    """
    Lexer for `Shen <http://shenlanguage.org/>`_ source code.
    """
    name = 'Shen'
    aliases = ['shen']
    filenames = ['*.shen']
    mimetypes = ['text/x-shen', 'application/x-shen']

    keywords = [
        'define', 'defmacro', 'defprolog', '/.', 'synonyms', 'defcc'
        'set', 'lambda', 'get', '/.', 'let', 'if', 'cases', 'do'
        ]
    builtins = [
        '*', '+', '-', '/', '/.', '<', '<-vector', '<=', '<e>', '=',
        '==', '>', '>=', '@p', '@s', '@v', 'abort', 'adjoin', 'and', 'append',
        'apply', 'arity', 'assoc', 'assoc-type', 'average', 'bind',
        'boolean?', 'bound?', 'byte->string', 'call', 'cd', 'character?',
        'compile', 'complex?', 'concat', 'congruent?', 'cons', 'cons?',
        'core', 'cut', 'debug', 'declare', 'define', 'delete-file', 'destroy',
        'difference', 'do', 'dump', 'echo', 'element?', 'empty?', 'error',
        'eval', 'explode', 'fail', 'fix', 'float?', 'floor', 'format',
        'freeze', 'fst', 'fwhen', 'gensym', 'get', 'get-array', 'get-prop',
        'hash', 'hdv', 'head', 'identical', 'if', 'if-with-checking',
        'if-without-checking', 'include', 'include-all-but', 'inferences',
        'input', 'input+', 'integer?', 'interror', 'intersection',
        'intmake-string', 'intoutput', 'lambda', 'length', 'let', 'limit',
        'lineread', 'list', 'load', 'macroexpand', 'make-string', 'map',
        'mapcan', 'maxinferences', 'mod', 'newsym', 'newvar', 'nl', 'not',
        'nth', 'number?', 'occurences', 'occurrences', 'occurs-check',
        'opaque', 'or', 'output', 'preclude', 'preclude-all-but', 'print',
        'profile', 'profile-results', 'ps', 'put', 'put-array', 'put-prop',
        'quit', 'random', 'rational?', 'read', 'read-char',
        'read-chars-as-stringlist', 'read-file', 'read-file-as-charlist',
        'read-file-as-string', 'real?', 'remove', 'return', 'reverse',
        'round', 'save', 'snd', 'specialise', 'speed', 'spy', 'sqrt', 'step',
        'stinput', 'string?', 'strong-warning', 'subst', 'sugar',
        'sugar-list', 'sum', 'symbol?', 'systemf', 'tail', 'tc', 'tc?',
        'thaw', 'time', 'tlv', 'track', 'transparent', 'tuple?', 'type',
        'unassoc-type', 'undebug', 'unify', 'unify!', 'union', 'unprofile',
        'unspecialise', 'unsugar', 'untrack', 'value', 'variable?', 'vector',
        'vector->', 'vector?', 'version', 'warn', 'write-to-file', 'y-or-n?'
        ]

    valid_symbol_chars = r'[\w!$%*+,<=>?/.\'@#;:-]'
    valid_name = '(%s+)' % valid_symbol_chars
    symbol_name = r'[a-z!$%*+,<=>?/.-]' + '*' + valid_symbol_chars
    variable = r'([A-Z]%s*)' % valid_symbol_chars

    def _multi_escape(entries):
        return '(?:' + '|'.join(map(re.escape, entries)) + \
               ')?![\\w!$%*+,<=>?/.-]'

    tokens = {
        'root' : [
            # Repl interactive
            (r'^\(\d+[+-]\) ', Generic.Prompt),
            (r'(?ms)(@\{)(.*?)(}@)',
             bygroups(Generic.Deleted, Generic.Emph, Generic.Deleted)),
            (r'(?ms)(#\{)(.*?)(}#)',
             bygroups(Generic.Deleted, Generic.Output, Generic.Deleted)),
            (r'\^$', Generic.Prompt),

            # strings
            (r'(?ms)"(\\\\|\\"|[^"])*"', String),

            # Comments \* ... *\
            (r'(?ms)\\\*.*?\*\\', Comment.Multiline),
            (r'-->', Operator), # Type declarations
            (r'(?ms)\{.*?\}', Keyword.Type),

            # whitespaces
            (r'\s+', Whitespace),

            # numbers
            (r'[+-]*\d+\.\d+(e-?\d+)?', Number.Float),
            (r'[+-]*\d+', Number.Integer),

            # special operators
            (r'@(p|s|v)', Operator),
            (r'\|', Operator),
            (r'->', Operator), # Pattern matchinb

            # highlight the keywords
            (_multi_escape(keywords), Keyword),

            # highlight the builtins
            (_multi_escape(builtins), Name.Builtin),

            # the remaining functions
            (r'(?<=\()' + valid_name, Name.Function),
            # find the remaining variables
            (variable, Name.Variable),

            # symbols
            (symbol_name, String.Symbol),

            (r'(\[|\])', Punctuation),
            (r'(\(|\))', Punctuation)
        ],
    }

def setup(sphinx):
    sphinx.add_lexer('shen', ShenLexer())
