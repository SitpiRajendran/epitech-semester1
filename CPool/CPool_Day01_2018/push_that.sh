#!/bin/bash

git add .
read -p 'Mettez un commentaire : ' commentaire
git commit -m commentaire
git push origin master
