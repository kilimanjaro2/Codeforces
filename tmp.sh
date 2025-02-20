  eristwo-slurm:
    submit-command: "sbatch "
    hostname: "eris2n5.research.partners.org"
    queue-name: "#SBATCH -p &"
    job-name: "#SBATCH -J &"
    standard-output: "#SBATCH -o &/slurm.%N.%j.out"
    error-output: "#SBATCH -e &/slurm.%N.%j.err"
    job-time: "#SBATCH -t &"
    num-nodes: "#SBATCH --nodes &"
    num-tasks: "#SBATCH --ntasks &"
    cores: "#SBATCH -c &"
    memory: "#SBATCH --mem &"
    x11-forwarding: ""
    service-class: "#SBATCH --qos &"
    mail-type: "#SBATCH --mail-type=END" # NONE, BEGIN, END, FAIL, REQUEUE, ALL (Please avoid: Equivalent to BEGIN, END, FAIL, INVALID_DEPEND, REQUEUE, and STAGE_OUT), INVALID_DEPEND (dependency never satisfied), STAGE_OUT (burst buffer stage out and teardown completed), TIME_LIMIT, TIME_LIMIT_90 (reached 90 percent of time limit), TIME_LIMIT_80 (reached 80 percent of time limit), TIME_LIMIT_50 (reached 50 percent of time limit) and ARRAY_TASKS (Please also avoid: Send emails for each array task).
    mail-address: "#SBATCH --mail-user=&"
    environment-setup: ". ~/.bashrc; conda activate nimlab; module load MATLAB/2022b; module load singularity/3.7.0;"
    debug: "echo '---PROCESS RESOURCE LIMITS---'\n\
            ulimit -a\n\
            echo '---SHARED LIBRARY PATH---'\n\
            echo $LD_LIBRARY_PATH\n\
            echo '---APPLICATION SEARCH PATH:---'\n\
            echo $PATH\n\
            echo '---LOADED MODULES:---'\n\
            module list\n\
            echo '---SHELL:---'\n\
            echo $SHELL\n\
            echo '---HOSTNAME:---'\n\
            hostname\n\
            echo '---GROUP MEMBERSHIP (files are created in the first group listed):---'\n\
            groups\n\
            echo '---DEFAULT FILE PERMISSIONS (UMASK):---'\n\
            umask\n\
            echo '---CURRENT WORKING DIRECTORY:---'\n\
            pwd\n\
            echo '---DISK SPACE QUOTA---'\n\
            df .\n\
            echo '---TEMPORARY SCRATCH FOLDER ($TMPDIR):---'\n\
            echo $TMPDIR"

