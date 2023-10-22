import os


def delete_exe_files(directory):
    for item in os.walk(directory):
        files = item[2]
        root = item[0]
        for file in files:
            if '.' not in file or file.endswith(".o"):
                file_path = os.path.join(root, file)
                os.remove(file_path)
                print(f"Deleted: {file_path}")


# 获取当前文件夹路径
current_directory = os.getcwd()

# 调用函数删除.exe文件
delete_exe_files(current_directory)
