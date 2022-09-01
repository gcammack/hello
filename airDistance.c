/**
 * Author: Gage Cammack
 *         gcammack2@huskers.unl.edu
 * Date: 2022/09/01
 *
 * A Program to find the distance between two points on a sphere
 *
 */

int main(int argc, char **argv) {

    int earthRadius = 6371;
    double latitudeA = argv[1];
    double longitudeA = argv[2];
    double latitudeB = argv[3];
    double longitudeb = argv[4];


    printf("Location Distance\n");
    printf("========================\n");
    printf("Origin:      (%f, %f)", latitudeA, longitudeA);
    printf("Destination: (%f, %f)", latitudeB, longitudeB);
    printf("%d",earthRadius);

    return 0;

}
