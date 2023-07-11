import os

def generate_content():
    with open('README.md', 'w') as readme:
        readme.write('## Implementations\n\n')
        readme.write('![BANNER](https://github.com/kartikmehta8/githubLearning/assets/77505989/85995645-56a5-4d8d-8e9e-87dae21bddd9)\n\n')
        
        for root, dirs, files in os.walk('.'):
            if root == '.':
                continue
            directory = root.lstrip('./')
            if directory in ["arrays", "binary_search", "hashing", "stack", "tries", "sorting_leetcode"]:
                dire = directory.split("_")
                dire = " ".join(dire)
                dire = dire.upper()
                
                readme.write(f"### {dire}\n")
            
                for file in files:
                    readme.write(f"- [{file}]({os.path.join(directory, file)})\n")

        readme.write('<h3><p align="center">Implemented with ❤️ by <a href="https://www.kartikmehta.xyz">kartikmehta8</a></p></h3>\n\')
        readme.write('<h6><p align="center">Automated by GitHub Actions</p></h6>')

if __name__ == '__main__':
    generate_content()
