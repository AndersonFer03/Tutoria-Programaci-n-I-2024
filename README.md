## Crear un Repositorio Git y Subirlo a GitHub

### 1. Inicializar un nuevo repositorio Git
```bash
git init
```

### 2. Crear el archivo README.md y .gitignore 

```bash
echo "# InicioGit" >> README.md
echo "# InicioGit" >> .gitignore
```
### 3. Ver el status de sus archivos 
```bash
git status
```
### 4. Añadir los archivos  
Todos los archivos de un solo
```bash
git add .
```

Archivo especifico 
```bash
git add README.md
```

### 5. Añadir el commit
```bash
git commit -m "first commit" 
```
### 6. Renombra la rama principal 
```bash
git branch -M main
```
### 7. Conectar al Repositorio 
```bash
git remote add origin https://github.com/tu-usuario/InicioGit.git
```
### 8. Subir los cambios al repositorio remoto
```bash
git push -u origin master
```

### 9. Verificar la conexión con el repositorio remoto
```bash
git remote -v
```

### Adicional Actualizar README.md y cargar los cambios al git
```bash
git pull
```

## Cargar un repositorio remoto subido
### 1. Inicializar el Git dentro de la carpeta 
```bash
git init
```
### 2. Conectar al Repositorio 
```bash
git remote add origin https://github.com/tu-usuario/InicioGit.git
```
### 3. Obtener y fusionar los cambios del repositorio remoto en la rama local
```bash
git pull origin main
```

