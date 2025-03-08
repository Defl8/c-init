struct Project {
	char *name;
	char *dir;
	char **files;
	char **folders;
};

// Free all dynamic memory from Project struct
void FreeProject(struct Project *proj);
