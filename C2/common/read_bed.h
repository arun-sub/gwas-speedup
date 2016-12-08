#ifndef __READ_BED_H__
#define __READ_BED_H__

#include <vector>
#include <string>

using namespace std;

void dumpStdout( vector<string> &genotypes, vector<string> &phenotypes, vector<double> &covariates);
void readPlinkData( string fileStub, vector<string> &genotypes, vector<string> &phenotypes, vector<double> &covariates, vector<string> &locus_name, int firstMarker, int lastMarker);
void writePlinkData(vector<int> selectedMarkers, string fileStub, string outFile);

#endif
