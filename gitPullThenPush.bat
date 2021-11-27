@echo off
git pull
::pause
@echo off
git add *
git commit -m "%date% %time%"
git push
::pause
