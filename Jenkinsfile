// This is an interview question. 
// The candidate is asked to clone a repository, create a build version, build the code, 
// and archive the artifacts and print out the list of submodules, last commit.
// The candidate is also asked to create a method that collects files and a method to clone a repository 
// with a specific branch name and linked submodules.
// The candidate is asked to parameterize the schedule of the pipeline.
// Clean the build before the build starts.

pipeline {
    agent any
    parameters {
        string(name: 'project_name', defaultValue: 'test_pipeline', trim: true)
        string(name: 'repo_path', defaultValue: 'https://github.com/swarnim25/test_int.git', trim: true)
        string(name: 'branch_name', defaultValue: 'test', trim: true)
        string(name: 'repo_name', defaultValue: 'test_int', trim: true)
        // 1. How would you add a parameter to schedule the pipeline? (Optional)
        string(name: 'cron_schedule', defaultValue: 'H/5 * * * *',  trim: true)
    }
    /*triggers {
        Currently disabled as there is no value
    }*/  
   
    options {
        timestamps()
    }
    environment {
        // Credentials
        github_id = "GitHub_token"
        VERSION = "v.1.0.0_${env.BUILD_NUMBER}"
    }
    stages {
        stage('SCM Checkout Stage') { 
            
            steps {
                    // 2. How would you clean the workspace before the build starts?
                    cleanWs()
                    // 3. How would you clone a repository with a specific branch name and linked submodules? using a method called cloneRepo.
                    //cloneRepo branch: ${branch_name} url ${repo_path}
                    git "https://github.com/swarnim25/test_int.git"
                    
            }
        }
        
        stage('Prepare Environment') {
            steps {
                script {
                    // 4. How would you create a folder called build_Output to store .hex files there (in workspace)? (optional)
                    sh 'mkdir -p build_Output'
                }
            }
        }

        stage('Build Version') { 
            steps {
                script {
                    // 5. How would you set a version number that starts with v.1.0.0_ and uses the latest build number?
                    echo "${VERSION}"
                    // 6. How would you change the version number of the build to the new version? (optional)
                }                  
            }
        }
        
        stage('Build Code') { 
            steps {
                script {
                    // 7. How would you create a build directory and compile the C files using batch commands?
                    sh 'usr/bin/gcc -o build_Output main.c math_operations.c'
                }
            }
        }

        stage('Collect and Package Build Files') { 
            steps {
                script {
                    // 8. How would you collect the hex file and store it in the folder created earlier?
                    // --> answered in ques 7
                    // 9. How would you zip the folder that contains the hex file?
                    sh 'gzip build_Output'
                }
            }
        }
       
        stage('Archiving Artifacts') {
            steps {
                    // 10. How would you archive the zip file?
                    sh 'unzip build_Output.zip'
            }
        }
    }
    post {
        always {
                // 11. How would you print out the list of submodules and the last commit?
                sh 'pwd'
                sh 'ls -ltrah'
                git commit 
        } 
    }

}