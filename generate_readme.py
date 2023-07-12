import os
import string

def generate_content():
    with open('README.md', 'w') as readme:
        readme.write('## Implementations\n\n')
        
        for root, dirs, files in os.walk('.'):
            if root == '.':
                continue
            directory = root.lstrip('./')
            if directory in ["arrays", "binary_search", "hashing", "stack", "tries", "sorting_leetcode", "recursion_leetcode"]:
                dire = directory.split("_")
                dire = " ".join(dire)
                dire = dire.upper()
                
                readme.write(f"### {dire}\n")
            
                for file in files:
                    fi = str(file)
                    fi = fi[:-4]
                    fi = fi.split("_")
                    fi = " ".join(fi)
                    fi = string.capwords(fi, sep=None)
                    readme.write(f"- [{fi}]({os.path.join(directory, file)})\n")

        readme.write('<h3><p align="center">Implemented with ❤️ by <a href="https://www.kartikmehta.xyz">kartikmehta8</a></p></h3>\n\n')
        readme.write('<h6><p align="center">Automated by GitHub Actions</p></h6>')

if __name__ == '__main__':
    generate_content()
