import os

def generate_content():
    with open('README.md', 'w') as readme:
        readme.write('### Repository Content\n\n')
        
        for root, dirs, files in os.walk('.'):
            if root == '.':
                continue
            directory = root.lstrip('./')
            readme.write(f"- {directory}\n")
            
            for file in files:
                readme.write(f"  - [{file}]({os.path.join(directory, file)})\n")

if __name__ == '__main__':
    generate_content()
