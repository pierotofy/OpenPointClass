#include "common.hpp"
#include "point_io.hpp"
#include "randomforest.hpp"

void help(char *ex){
    std::cout << "Usage: " << ex << std::endl
              << "\t <input point cloud>" << std::endl
              << "\t <classification model (.bin)>" << std::endl
              << "\t <output point cloud>" << std::endl;
    exit(EXIT_FAILURE);
}

int main(int argc, char **argv){
    if( argc < 4 ) help(argv[0]);

    try {
        // Read points
        std::string inputFile = std::string(argv[1]);
        std::string modelFile = std::string(argv[2]);
        std::string outputFile = std::string(argv[3]);


        // auto labels = getTrainingLabels();
        // auto pointSet = readPointSet_old(inputFile);
        // double mSpacing = modeSpacing(pointSet.first, 3);
        // double startResolution = mSpacing * 4; // meters
        // std::cout << "Starting resolution: " << mSpacing << std::endl;
        // auto scales = computeScales(NUM_SCALES, pointSet.first, startResolution);
        // std::cout << "Computed " << scales.size() << " scales" << std::endl;
        // auto features = getFeatures(scales);
        // std::cout << "Features: " << features.size() << std::endl;

        // classify(pointSet, modelFile, features, labels, true, false);
        // savePointSet(pointSet.first, outputFile);
    } catch(pdal::pdal_error& e) {
        std::cerr << "PDAL Error: " << e.what() << std::endl;
        exit(EXIT_FAILURE);
    } catch(std::exception &e){
        std::cerr << "Error: " << e.what() << std::endl;
        exit(EXIT_FAILURE);
    }

    return 0;
}
