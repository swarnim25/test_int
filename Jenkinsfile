pipeline {
    agent any  // Jenkins will run this pipeline on any available agent

    environment {
        // Define environment variables if needed (e.g., deployment paths, compiler options)
        //DEPLOY_DIR = "/"  // Change to your deployment directory
        BUILD_DIR = "build"  // Folder to store compiled files
    }

    stages {
        stage('Checkout') {
            steps {
                // Checkout the Git repository to get the .c and .h files
                git 'https://github.com/swarnim25/test_int'
            }
        }

        stage('Build') {
            steps {
                script {
                    // Create a build directory if it doesn't exist
                    sh 'mkdir -p ${BUILD_DIR}'
                    
                    // Compile .c files using gcc (or any other C compiler)
                    sh 'gcc -o ${BUILD_DIR}/output_program *.c'

                    // Optional: If there are multiple .c files, you can compile each separately
                    // sh 'gcc -c file1.c -o ${BUILD_DIR}/file1.o'
                    // sh 'gcc -c file2.c -o ${BUILD_DIR}/file2.o'
                    // sh 'gcc -o ${BUILD_DIR}/output_program ${BUILD_DIR}/*.o'
                }
            }
        }

        /*stage('Deploy') {
            steps {
                script {
                    // Deploy the compiled binary and header files to a remote server or system
                    // You can use SCP, FTP, or any custom deployment process.
                    
                    // For example, SCP to a remote server:
                    //sh 'scp ${BUILD_DIR}/swarnimchandel@remote-server:${DEPLOY_DIR}'
                    
                    // Optionally, deploy the header files (.h) or other resources as needed:
                    //sh 'scp *.h user@remote-server:${DEPLOY_DIR}'
                }
            }
        }*/
    }

    post {
        always {
            // Clean up, notifications, or any other post-build steps
            echo "Cleaning up the workspace"
            cleanWs()  // Optional: Clean up workspace after build
        }
        success {
            echo "Build and deploy completed successfully!"
        }
        failure {
            echo "Build failed, please check the logs"
        }
    }
}
