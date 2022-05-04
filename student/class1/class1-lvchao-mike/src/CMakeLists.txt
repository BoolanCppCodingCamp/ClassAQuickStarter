aux_source_directory(. DIR_SRCS)
aux_source_directory(./proto DIR_PB_SRCS)
add_executable(class1
        ${DIR_SRCS}
        )