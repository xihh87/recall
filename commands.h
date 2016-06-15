Synonym synonyms[] = {
	"display find list print show view",
	"information status",
	"remote upstream"
};

Command commands[] = {
	/* command                     description        additional keywords */
	{ "amixer -Mq set Master 1%-", "decrease volume", "down lower sound" },
	{ "amixer -Mq set Master 1%+", "increase volume", "raise sound up" },
	{ "openssl req \\\n -new \\\n -nodes \\\n -out [certname.csr] \\\n -key [path/to/key] \\\n -subj \"/C=MX/ST=09/L=Ciudad de Mexico/O=Instituto Nacional de Medicina Genomica/OU=Unidad de Servicios Bioinformaticos/CN=INMEGEN\"",
		 "Generate new certificate signing request", "csr" },
	{ "curl -LO [url]", "download a file" },
	{ "date -I", "print date in ISO 8601 format" },
	{ "date -Is", "print date and time in ISO 8601 format" },
	{ "dkms status [module]", "show status of dynamic kernel module" },
	{ "diff -y --suppress-common-lines [file1] [file2]",
		"compare files side by side", "difference" },
	{ "expr [expression]", "evaluate expression",
		"add arithmetic divide math multiply numbers subtract" },
	{ "fc-cache -frv", "rebuild fontconfig cache", "fonts" },
	{ "fc-list", "list fonts known by fontconfig" },
	{ "fc-match [font]", "show font that would be used by fontconfig",
		"resolve substitute" },
	{ "git push :[branch]", "delete remote branch on remote repo" },
	{ "git branch --remote --delete [branch]", "delete remote branch on local repo" },
	{ "git branch -vv", "list local branches and remote repositories" },
	{ "git push -u [remote] [branch]",
		"push local branch to remote repository", "create new" },
	{ "git remote -v", "list remote repositories" },
	{ "ip link show [device]", "show status of network adapter",
		"ethernet wifi wireless" },
	{ "iw dev [device] link", "show status of wireless network adapter",
		"wifi" },
	{ "sudo su -c 'echo 1 > /proc/sys/vm/drop_caches'", "clear cache" },
};

#define NUM_COMMANDS (sizeof(commands) / sizeof(Command))
#define NUM_SYNONYMS (sizeof(synonyms) / sizeof(Synonym))
