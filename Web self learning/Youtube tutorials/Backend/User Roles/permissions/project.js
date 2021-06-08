const { ROLE } = require('../data')

// Check if certain user an view certain project
function canViewProject(user, project) {
    return (
        user.role === ROLE.ADMIN ||
        project.userId === user.id
    )
}

function scopedProjects(user, projects) {
    if (user.role === ROLE.ADMIN)
        return projects
    return projects.filter(project => project.userId === user.id)
}

function canDeleteProject(user, project) {
    return project.userId === user.id
}

module.exports = {
    canViewProject,
    scopedProjects,
    canDeleteProject
}
