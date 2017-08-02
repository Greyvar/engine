stage("Compile") {
	node {
		checkout scm
		sh "cmake ."
		sh "./package.sh"
		archive "pkg/*.zip"
	}
}
