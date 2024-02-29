for (size_t i = 0; i < matrix.size(); ++i) {
        for (size_t j = i + 1; j < matrix.size(); ++j) {
            // Swap elements
            std::swap(matrix[i][j], matrix[j][i]);
        }
    }
