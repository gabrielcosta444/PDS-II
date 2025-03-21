# **AEDS-II - Dicas**

## **1ª Dica - Use WSL (Windows Subsystem for Linux)**

### **Vantagens:**
- **Integração de Ferramentas:** Permite executar ferramentas e scripts do Linux no Windows, facilitando o desenvolvimento.
- **Desenvolvimento Cruzado:** Ideal para aplicações que serão implantadas em servidores Linux.
- **Eficiência de Recursos:** Utiliza menos memória e CPU em comparação com máquinas virtuais tradicionais.
- **Facilidade de Uso:** Executa aplicações de linha de comando Linux diretamente no Windows, com integração ao sistema de arquivos.

### **Como instalar o WSL**

#### **Passo a Passo:**
1. **Instalar o Windows Terminal:**
   - Acesse a Microsoft Store e busque por "Windows Terminal".
   - Clique em **Instalar**.

2. **Abrir o terminal como Administrador:**
   - Clique com o botão direito no ícone do Windows Terminal.
   - Selecione **Executar como administrador**.

3. **Habilitar o WSL:**
   - No PowerShell, execute o comando:
     ```sh
     wsl --install
     ```
   - O sistema reiniciará automaticamente após a instalação. Caso não reinicie, faça-o manualmente.

4. **Configurar a distribuição Linux:**
   - Ao abrir o terminal, a primeira execução do Ubuntu pedirá para criar um nome de usuário e senha.

---

## **2ª Dica - Principais Comandos do Git**

### **1. Configuração Inicial**
```sh
git config --global user.name "Seu Nome"
git config --global user.email "seuemail@example.com"
```
Criar e navegar para a pasta de projetos:
```sh
mkdir ~/projetos
cd ~/projetos
```

### **2. Clonar um Repositório**
```sh
git clone <URL-do-repositório>
```

### **3. Verificar o Status do Repositório**
```sh
git status
```

### **4. Adicionar Arquivos ao Stage**
- Adicionar um arquivo específico:
  ```sh
  git add <nome-do-arquivo>
  ```
- Adicionar todos os arquivos:
  ```sh
  git add .
  ```

### **5. Fazer um Commit**
- Com mensagem direta:
  ```sh
  git commit -m "Sua mensagem de commit"
  ```
- Abrir editor padrão para editar a mensagem:
  ```sh
  git commit
  ```

### **6. Enviar Alterações para o Repositório Remoto**
```sh
git push origin <nome-da-branch>
```
- Se estiver na branch principal:
  ```sh
  git push origin main
  ```

### **7. Atualizar o Repositório Local**
```sh
git pull origin <nome-da-branch>
```
- Para a branch principal:
  ```sh
  git pull origin main
  ```

### **8. Criar e Alternar entre Branches**
- Criar uma nova branch:
  ```sh
  git branch <nome-da-branch>
  ```
- Trocar para a nova branch:
  ```sh
  git checkout <nome-da-branch>
  ```
- Criar e trocar automaticamente:
  ```sh
  git checkout -b <nome-da-branch>
  ```

### **9. Listar Branches Disponíveis**
```sh
git branch
```

### **10. Mesclar uma Branch com Outra**
- Primeiro, vá para a branch principal:
  ```sh
  git checkout main
  ```
- Agora mescle a branch desejada:
  ```sh
  git merge <nome-da-branch>
  ```

### **11. Reverter um Commit**
```sh
git revert <ID-do-commit>
```

### **12. Ver Histórico de Commits**
```sh
git log
```

### **13. Remover Arquivos do Stage**
- Remover um arquivo:
  ```sh
  git reset <nome-do-arquivo>
  ```
- Remover todos os arquivos:
  ```sh
  git reset
  ```

### **14. Remover o Último Commit Local (mantendo alterações)**
```sh
git reset --soft HEAD^
```

---

## **Como Gerar um Token de Acesso Pessoal no GitHub**
1. Acesse o [GitHub](https://github.com/) e faça login.
2. Vá até **Settings**.
3. No menu à esquerda, clique em **Developer settings**.
4. Clique em **Personal access tokens** > **Tokens (classic)**.
5. Clique em **Generate new token**.
6. Dê um nome ao token e marque a permissão **repo**.
7. Salve o token, pois ele só será visível no momento da criação.

### **Dica:**
Para evitar a necessidade de autenticação frequente, baixe a extensão WSL no VS Code e faça seus commits pelo terminal do VS Code. Ele pedirá autenticação apenas uma vez.

---

Com essas dicas, você estará pronto para trabalhar com WSL e Git de maneira eficiente!

