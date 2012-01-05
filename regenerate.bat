echo "Regenerating..."

cd website
call make clean
call make html
cd ..\learn_shen
call make clean
call make html
cd ..
move website\_build\html result
move learn_shen\_build\html result\learn-shen

echo "Done."