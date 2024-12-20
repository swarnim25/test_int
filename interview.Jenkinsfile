// This is an interview question. 
// The candidate is asked to clone a repository, create a build version, build the code, 
// and archive the artifacts and print out the list of submodules, last commit.
// The candidate is also asked to create a method that collects files and a method to clone a repository 
// with a specific branch name and linked submodules.
// The candidate is asked to parameterize the schedule of the pipeline.
// Clean the build before the build starts.

pipeline {
    parameters {
        string(name: 'project_name', defaultValue: '', trim: true)
        string(name: 'repo_path', defaultValue: '', trim: true)
        string(name: 'branch_name', defaultValue: '', trim: true)
        string(name: 'repo_name', defaultValue: '', trim: true)
        // 1. How would you add a parameter to schedule the pipeline? (Optional)
        string(name: 'cron_schedule', defaultValue: '',  trim: true)
    }
    triggers {
        // 1. How would you use an input parameter to schedule the pipeline (every Saturday at 2:00 AM)? (Optional)
    }
    options {
        timestamps()
    }
    environment {
        // Credentials
        github_id = "GitHub_token"
    }
    stages {
        stage('SCM Checkout Stage') { 
            steps {
                    // 2. How would you clean the workspace before the build starts?
                    // 3. How would you clone a repository with a specific branch name and linked submodules? using a method called cloneRepo.
            }
        }
        
        stage('Prepare Environment') {
            steps {
                script {
                    // 4. How would you create a folder called build_Output to store .hex files there (in workspace)? (optional)
                }
            }
        }

        stage('Build Version') { 
            steps {
                script {
                    // 5. How would you set a version number that starts with v.1.0.0_ and uses the latest build number?
                    // 6. How would you change the version number of the build to the new version? (optional)
                }                  
            }
        }
        
        stage('Build Code') { 
            steps {
                script {
                    // 7. How would you create a build directory and compile the C files using batch commands?
                }
            }
        }

        stage('Collect and Package Build Files') { 
            steps {
                script {
                    // 8. How would you collect the hex file and store it in the folder created earlier?
                    // 9. How would you zip the folder that contains the hex file?
                }
            }
        }
       
        stage('Archiving Artifacts') {
            steps {
                    // 10. How would you archive the zip file?
            }
        }
    }
    post {
        always {
                // 11. How would you print out the list of submodules and the last commit?
        } 
    }

}