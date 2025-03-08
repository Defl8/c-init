typedef struct {
	char *name;
	char *dir;
	char **files;
	char **folders;
} Project;

// Free all dynamic memory from Project struct
void FreeProject(Project *proj);
