// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// C_adductAnnotation
Rcpp::List C_adductAnnotation(int numMonoiso, int numAdducts, int tolerance, int numMass, NumericVector R_monoisitopeMassVector, NumericVector R_adductMassVector, List R_isotopes, NumericVector R_isotopeListOrder, NumericVector R_massAxis);
RcppExport SEXP _rMSIproc_C_adductAnnotation(SEXP numMonoisoSEXP, SEXP numAdductsSEXP, SEXP toleranceSEXP, SEXP numMassSEXP, SEXP R_monoisitopeMassVectorSEXP, SEXP R_adductMassVectorSEXP, SEXP R_isotopesSEXP, SEXP R_isotopeListOrderSEXP, SEXP R_massAxisSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type numMonoiso(numMonoisoSEXP);
    Rcpp::traits::input_parameter< int >::type numAdducts(numAdductsSEXP);
    Rcpp::traits::input_parameter< int >::type tolerance(toleranceSEXP);
    Rcpp::traits::input_parameter< int >::type numMass(numMassSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type R_monoisitopeMassVector(R_monoisitopeMassVectorSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type R_adductMassVector(R_adductMassVectorSEXP);
    Rcpp::traits::input_parameter< List >::type R_isotopes(R_isotopesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type R_isotopeListOrder(R_isotopeListOrderSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type R_massAxis(R_massAxisSEXP);
    rcpp_result_gen = Rcpp::wrap(C_adductAnnotation(numMonoiso, numAdducts, tolerance, numMass, R_monoisitopeMassVector, R_adductMassVector, R_isotopes, R_isotopeListOrder, R_massAxis));
    return rcpp_result_gen;
END_RCPP
}
// C_isotopeAnnotator
Rcpp::List C_isotopeAnnotator(int massPeaks, int massChannels, int numPixels, int numIso, NumericMatrix PeakMtx, NumericVector massVec, NumericVector massChanVec, int tolerance, double scoreThreshold, bool ToleranceInScans);
RcppExport SEXP _rMSIproc_C_isotopeAnnotator(SEXP massPeaksSEXP, SEXP massChannelsSEXP, SEXP numPixelsSEXP, SEXP numIsoSEXP, SEXP PeakMtxSEXP, SEXP massVecSEXP, SEXP massChanVecSEXP, SEXP toleranceSEXP, SEXP scoreThresholdSEXP, SEXP ToleranceInScansSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type massPeaks(massPeaksSEXP);
    Rcpp::traits::input_parameter< int >::type massChannels(massChannelsSEXP);
    Rcpp::traits::input_parameter< int >::type numPixels(numPixelsSEXP);
    Rcpp::traits::input_parameter< int >::type numIso(numIsoSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type PeakMtx(PeakMtxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type massVec(massVecSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type massChanVec(massChanVecSEXP);
    Rcpp::traits::input_parameter< int >::type tolerance(toleranceSEXP);
    Rcpp::traits::input_parameter< double >::type scoreThreshold(scoreThresholdSEXP);
    Rcpp::traits::input_parameter< bool >::type ToleranceInScans(ToleranceInScansSEXP);
    rcpp_result_gen = Rcpp::wrap(C_isotopeAnnotator(massPeaks, massChannels, numPixels, numIso, PeakMtx, massVec, massChanVec, tolerance, scoreThreshold, ToleranceInScans));
    return rcpp_result_gen;
END_RCPP
}
// AlignSpectrumToReference
NumericVector AlignSpectrumToReference(NumericVector mass, NumericVector ref, NumericVector x, bool bilinear, double lagRefLow, double lagRefMid, double lagRefHigh, int iterations, double lagLimitppm, int fftOverSampling);
RcppExport SEXP _rMSIproc_AlignSpectrumToReference(SEXP massSEXP, SEXP refSEXP, SEXP xSEXP, SEXP bilinearSEXP, SEXP lagRefLowSEXP, SEXP lagRefMidSEXP, SEXP lagRefHighSEXP, SEXP iterationsSEXP, SEXP lagLimitppmSEXP, SEXP fftOverSamplingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type mass(massSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ref(refSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type bilinear(bilinearSEXP);
    Rcpp::traits::input_parameter< double >::type lagRefLow(lagRefLowSEXP);
    Rcpp::traits::input_parameter< double >::type lagRefMid(lagRefMidSEXP);
    Rcpp::traits::input_parameter< double >::type lagRefHigh(lagRefHighSEXP);
    Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< double >::type lagLimitppm(lagLimitppmSEXP);
    Rcpp::traits::input_parameter< int >::type fftOverSampling(fftOverSamplingSEXP);
    rcpp_result_gen = Rcpp::wrap(AlignSpectrumToReference(mass, ref, x, bilinear, lagRefLow, lagRefMid, lagRefHigh, iterations, lagLimitppm, fftOverSampling));
    return rcpp_result_gen;
END_RCPP
}
// AverageSpectrumC
NumericVector AverageSpectrumC(StringVector fileNames, int massChannels, IntegerVector numRows, String dataType, int numOfThreads);
RcppExport SEXP _rMSIproc_AverageSpectrumC(SEXP fileNamesSEXP, SEXP massChannelsSEXP, SEXP numRowsSEXP, SEXP dataTypeSEXP, SEXP numOfThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector >::type fileNames(fileNamesSEXP);
    Rcpp::traits::input_parameter< int >::type massChannels(massChannelsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numRows(numRowsSEXP);
    Rcpp::traits::input_parameter< String >::type dataType(dataTypeSEXP);
    Rcpp::traits::input_parameter< int >::type numOfThreads(numOfThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(AverageSpectrumC(fileNames, massChannels, numRows, dataType, numOfThreads));
    return rcpp_result_gen;
END_RCPP
}
// FullImageBitDepthReduction
void FullImageBitDepthReduction(StringVector fileNames, int massChannels, IntegerVector numRows, String dataType, int numOfThreads, int NoiseWinSize);
RcppExport SEXP _rMSIproc_FullImageBitDepthReduction(SEXP fileNamesSEXP, SEXP massChannelsSEXP, SEXP numRowsSEXP, SEXP dataTypeSEXP, SEXP numOfThreadsSEXP, SEXP NoiseWinSizeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector >::type fileNames(fileNamesSEXP);
    Rcpp::traits::input_parameter< int >::type massChannels(massChannelsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numRows(numRowsSEXP);
    Rcpp::traits::input_parameter< String >::type dataType(dataTypeSEXP);
    Rcpp::traits::input_parameter< int >::type numOfThreads(numOfThreadsSEXP);
    Rcpp::traits::input_parameter< int >::type NoiseWinSize(NoiseWinSizeSEXP);
    FullImageBitDepthReduction(fileNames, massChannels, numRows, dataType, numOfThreads, NoiseWinSize);
    return R_NilValue;
END_RCPP
}
// SpectrumBitDepthReduction
NumericVector SpectrumBitDepthReduction(NumericVector data, int NoiseWinSize);
RcppExport SEXP _rMSIproc_SpectrumBitDepthReduction(SEXP dataSEXP, SEXP NoiseWinSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type NoiseWinSize(NoiseWinSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(SpectrumBitDepthReduction(data, NoiseWinSize));
    return rcpp_result_gen;
END_RCPP
}
// FullImageAlign
List FullImageAlign(StringVector fileNames, NumericVector mass, NumericVector refSpectrum, IntegerVector numRows, String dataType, int numOfThreads, bool AlignmentBilinear, int AlignmentIterations, int AlignmentMaxShiftPpm, double RefLow, double RefMid, double RefHigh, int OverSampling);
RcppExport SEXP _rMSIproc_FullImageAlign(SEXP fileNamesSEXP, SEXP massSEXP, SEXP refSpectrumSEXP, SEXP numRowsSEXP, SEXP dataTypeSEXP, SEXP numOfThreadsSEXP, SEXP AlignmentBilinearSEXP, SEXP AlignmentIterationsSEXP, SEXP AlignmentMaxShiftPpmSEXP, SEXP RefLowSEXP, SEXP RefMidSEXP, SEXP RefHighSEXP, SEXP OverSamplingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector >::type fileNames(fileNamesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mass(massSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type refSpectrum(refSpectrumSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numRows(numRowsSEXP);
    Rcpp::traits::input_parameter< String >::type dataType(dataTypeSEXP);
    Rcpp::traits::input_parameter< int >::type numOfThreads(numOfThreadsSEXP);
    Rcpp::traits::input_parameter< bool >::type AlignmentBilinear(AlignmentBilinearSEXP);
    Rcpp::traits::input_parameter< int >::type AlignmentIterations(AlignmentIterationsSEXP);
    Rcpp::traits::input_parameter< int >::type AlignmentMaxShiftPpm(AlignmentMaxShiftPpmSEXP);
    Rcpp::traits::input_parameter< double >::type RefLow(RefLowSEXP);
    Rcpp::traits::input_parameter< double >::type RefMid(RefMidSEXP);
    Rcpp::traits::input_parameter< double >::type RefHigh(RefHighSEXP);
    Rcpp::traits::input_parameter< int >::type OverSampling(OverSamplingSEXP);
    rcpp_result_gen = Rcpp::wrap(FullImageAlign(fileNames, mass, refSpectrum, numRows, dataType, numOfThreads, AlignmentBilinear, AlignmentIterations, AlignmentMaxShiftPpm, RefLow, RefMid, RefHigh, OverSampling));
    return rcpp_result_gen;
END_RCPP
}
// FullImagePeakPicking
List FullImagePeakPicking(StringVector fileNames, NumericVector mass, IntegerVector numRows, String dataType, int numOfThreads, double SNR, int WinSize, int InterpolationUpSampling, bool doBinning, double binningTolerance, double binningFilter, bool binningIn_ppm, bool exportPeakList);
RcppExport SEXP _rMSIproc_FullImagePeakPicking(SEXP fileNamesSEXP, SEXP massSEXP, SEXP numRowsSEXP, SEXP dataTypeSEXP, SEXP numOfThreadsSEXP, SEXP SNRSEXP, SEXP WinSizeSEXP, SEXP InterpolationUpSamplingSEXP, SEXP doBinningSEXP, SEXP binningToleranceSEXP, SEXP binningFilterSEXP, SEXP binningIn_ppmSEXP, SEXP exportPeakListSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector >::type fileNames(fileNamesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mass(massSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numRows(numRowsSEXP);
    Rcpp::traits::input_parameter< String >::type dataType(dataTypeSEXP);
    Rcpp::traits::input_parameter< int >::type numOfThreads(numOfThreadsSEXP);
    Rcpp::traits::input_parameter< double >::type SNR(SNRSEXP);
    Rcpp::traits::input_parameter< int >::type WinSize(WinSizeSEXP);
    Rcpp::traits::input_parameter< int >::type InterpolationUpSampling(InterpolationUpSamplingSEXP);
    Rcpp::traits::input_parameter< bool >::type doBinning(doBinningSEXP);
    Rcpp::traits::input_parameter< double >::type binningTolerance(binningToleranceSEXP);
    Rcpp::traits::input_parameter< double >::type binningFilter(binningFilterSEXP);
    Rcpp::traits::input_parameter< bool >::type binningIn_ppm(binningIn_ppmSEXP);
    Rcpp::traits::input_parameter< bool >::type exportPeakList(exportPeakListSEXP);
    rcpp_result_gen = Rcpp::wrap(FullImagePeakPicking(fileNames, mass, numRows, dataType, numOfThreads, SNR, WinSize, InterpolationUpSampling, doBinning, binningTolerance, binningFilter, binningIn_ppm, exportPeakList));
    return rcpp_result_gen;
END_RCPP
}
// ReplacePeakMatrixZeros
List ReplacePeakMatrixZeros(List PeakMatrix, StringVector fileNames, NumericVector mass, IntegerVector numRows, String dataType, int numOfThreads, int WinSize, int InterpolationUpSampling);
RcppExport SEXP _rMSIproc_ReplacePeakMatrixZeros(SEXP PeakMatrixSEXP, SEXP fileNamesSEXP, SEXP massSEXP, SEXP numRowsSEXP, SEXP dataTypeSEXP, SEXP numOfThreadsSEXP, SEXP WinSizeSEXP, SEXP InterpolationUpSamplingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type PeakMatrix(PeakMatrixSEXP);
    Rcpp::traits::input_parameter< StringVector >::type fileNames(fileNamesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mass(massSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numRows(numRowsSEXP);
    Rcpp::traits::input_parameter< String >::type dataType(dataTypeSEXP);
    Rcpp::traits::input_parameter< int >::type numOfThreads(numOfThreadsSEXP);
    Rcpp::traits::input_parameter< int >::type WinSize(WinSizeSEXP);
    Rcpp::traits::input_parameter< int >::type InterpolationUpSampling(InterpolationUpSamplingSEXP);
    rcpp_result_gen = Rcpp::wrap(ReplacePeakMatrixZeros(PeakMatrix, fileNames, mass, numRows, dataType, numOfThreads, WinSize, InterpolationUpSampling));
    return rcpp_result_gen;
END_RCPP
}
// FullImageSmoothing
void FullImageSmoothing(StringVector fileNames, int massChannels, IntegerVector numRows, String dataType, int numOfThreads, int SmoothingKernelSize);
RcppExport SEXP _rMSIproc_FullImageSmoothing(SEXP fileNamesSEXP, SEXP massChannelsSEXP, SEXP numRowsSEXP, SEXP dataTypeSEXP, SEXP numOfThreadsSEXP, SEXP SmoothingKernelSizeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector >::type fileNames(fileNamesSEXP);
    Rcpp::traits::input_parameter< int >::type massChannels(massChannelsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numRows(numRowsSEXP);
    Rcpp::traits::input_parameter< String >::type dataType(dataTypeSEXP);
    Rcpp::traits::input_parameter< int >::type numOfThreads(numOfThreadsSEXP);
    Rcpp::traits::input_parameter< int >::type SmoothingKernelSize(SmoothingKernelSizeSEXP);
    FullImageSmoothing(fileNames, massChannels, numRows, dataType, numOfThreads, SmoothingKernelSize);
    return R_NilValue;
END_RCPP
}
// NoiseEstimationFFTCosWin
NumericVector NoiseEstimationFFTCosWin(NumericVector x, int filWinSize);
RcppExport SEXP _rMSIproc_NoiseEstimationFFTCosWin(SEXP xSEXP, SEXP filWinSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type filWinSize(filWinSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(NoiseEstimationFFTCosWin(x, filWinSize));
    return rcpp_result_gen;
END_RCPP
}
// NoiseEstimationFFTExpWin
NumericVector NoiseEstimationFFTExpWin(NumericVector x, int filWinSize);
RcppExport SEXP _rMSIproc_NoiseEstimationFFTExpWin(SEXP xSEXP, SEXP filWinSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type filWinSize(filWinSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(NoiseEstimationFFTExpWin(x, filWinSize));
    return rcpp_result_gen;
END_RCPP
}
// NoiseEstimationFFTCosWinMat
NumericMatrix NoiseEstimationFFTCosWinMat(NumericMatrix x, int filWinSize);
RcppExport SEXP _rMSIproc_NoiseEstimationFFTCosWinMat(SEXP xSEXP, SEXP filWinSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type filWinSize(filWinSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(NoiseEstimationFFTCosWinMat(x, filWinSize));
    return rcpp_result_gen;
END_RCPP
}
// NoiseEstimationFFTExpWinMat
NumericMatrix NoiseEstimationFFTExpWinMat(NumericMatrix x, int filWinSize);
RcppExport SEXP _rMSIproc_NoiseEstimationFFTExpWinMat(SEXP xSEXP, SEXP filWinSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type filWinSize(filWinSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(NoiseEstimationFFTExpWinMat(x, filWinSize));
    return rcpp_result_gen;
END_RCPP
}
// MergePeakMatricesC
List MergePeakMatricesC(List PeakMatrices, double binningTolerance, double binningFilter);
RcppExport SEXP _rMSIproc_MergePeakMatricesC(SEXP PeakMatricesSEXP, SEXP binningToleranceSEXP, SEXP binningFilterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type PeakMatrices(PeakMatricesSEXP);
    Rcpp::traits::input_parameter< double >::type binningTolerance(binningToleranceSEXP);
    Rcpp::traits::input_parameter< double >::type binningFilter(binningFilterSEXP);
    rcpp_result_gen = Rcpp::wrap(MergePeakMatricesC(PeakMatrices, binningTolerance, binningFilter));
    return rcpp_result_gen;
END_RCPP
}
// LoadPeakMatrixC
List LoadPeakMatrixC(String path);
RcppExport SEXP _rMSIproc_LoadPeakMatrixC(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(LoadPeakMatrixC(path));
    return rcpp_result_gen;
END_RCPP
}
// StorePeakMatrixC
void StorePeakMatrixC(String path, List mat);
RcppExport SEXP _rMSIproc_StorePeakMatrixC(SEXP pathSEXP, SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type path(pathSEXP);
    Rcpp::traits::input_parameter< List >::type mat(matSEXP);
    StorePeakMatrixC(path, mat);
    return R_NilValue;
END_RCPP
}
// DetectPeaks_C
NumericMatrix DetectPeaks_C(NumericVector mass, NumericVector intensity, double SNR, int WinSize, int UpSampling);
RcppExport SEXP _rMSIproc_DetectPeaks_C(SEXP massSEXP, SEXP intensitySEXP, SEXP SNRSEXP, SEXP WinSizeSEXP, SEXP UpSamplingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type mass(massSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type intensity(intensitySEXP);
    Rcpp::traits::input_parameter< double >::type SNR(SNRSEXP);
    Rcpp::traits::input_parameter< int >::type WinSize(WinSizeSEXP);
    Rcpp::traits::input_parameter< int >::type UpSampling(UpSamplingSEXP);
    rcpp_result_gen = Rcpp::wrap(DetectPeaks_C(mass, intensity, SNR, WinSize, UpSampling));
    return rcpp_result_gen;
END_RCPP
}
// TestPeakInterpolation_C
NumericVector TestPeakInterpolation_C(NumericVector mass, NumericVector intensity, int peakIndex, int WinSize, int UpSampling, bool useHanning, int Iterations);
RcppExport SEXP _rMSIproc_TestPeakInterpolation_C(SEXP massSEXP, SEXP intensitySEXP, SEXP peakIndexSEXP, SEXP WinSizeSEXP, SEXP UpSamplingSEXP, SEXP useHanningSEXP, SEXP IterationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type mass(massSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type intensity(intensitySEXP);
    Rcpp::traits::input_parameter< int >::type peakIndex(peakIndexSEXP);
    Rcpp::traits::input_parameter< int >::type WinSize(WinSizeSEXP);
    Rcpp::traits::input_parameter< int >::type UpSampling(UpSamplingSEXP);
    Rcpp::traits::input_parameter< bool >::type useHanning(useHanningSEXP);
    Rcpp::traits::input_parameter< int >::type Iterations(IterationsSEXP);
    rcpp_result_gen = Rcpp::wrap(TestPeakInterpolation_C(mass, intensity, peakIndex, WinSize, UpSampling, useHanning, Iterations));
    return rcpp_result_gen;
END_RCPP
}
// TestHanningWindow
NumericVector TestHanningWindow(NumericVector mass, int WinSize, int UpSampling);
RcppExport SEXP _rMSIproc_TestHanningWindow(SEXP massSEXP, SEXP WinSizeSEXP, SEXP UpSamplingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type mass(massSEXP);
    Rcpp::traits::input_parameter< int >::type WinSize(WinSizeSEXP);
    Rcpp::traits::input_parameter< int >::type UpSampling(UpSamplingSEXP);
    rcpp_result_gen = Rcpp::wrap(TestHanningWindow(mass, WinSize, UpSampling));
    return rcpp_result_gen;
END_RCPP
}
// TestAreaWindow
NumericVector TestAreaWindow(NumericVector mass, int WinSize, int UpSampling);
RcppExport SEXP _rMSIproc_TestAreaWindow(SEXP massSEXP, SEXP WinSizeSEXP, SEXP UpSamplingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type mass(massSEXP);
    Rcpp::traits::input_parameter< int >::type WinSize(WinSizeSEXP);
    Rcpp::traits::input_parameter< int >::type UpSampling(UpSamplingSEXP);
    rcpp_result_gen = Rcpp::wrap(TestAreaWindow(mass, WinSize, UpSampling));
    return rcpp_result_gen;
END_RCPP
}
// PrintrMSIObjectInfo
void PrintrMSIObjectInfo(StringVector fileNames, int massChannels, IntegerVector numRows, String dataType);
RcppExport SEXP _rMSIproc_PrintrMSIObjectInfo(SEXP fileNamesSEXP, SEXP massChannelsSEXP, SEXP numRowsSEXP, SEXP dataTypeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector >::type fileNames(fileNamesSEXP);
    Rcpp::traits::input_parameter< int >::type massChannels(massChannelsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numRows(numRowsSEXP);
    Rcpp::traits::input_parameter< String >::type dataType(dataTypeSEXP);
    PrintrMSIObjectInfo(fileNames, massChannels, numRows, dataType);
    return R_NilValue;
END_RCPP
}
// LoadrMSIDataCube
NumericMatrix LoadrMSIDataCube(StringVector fileNames, int massChannels, IntegerVector numRows, String dataType, int cubeSel);
RcppExport SEXP _rMSIproc_LoadrMSIDataCube(SEXP fileNamesSEXP, SEXP massChannelsSEXP, SEXP numRowsSEXP, SEXP dataTypeSEXP, SEXP cubeSelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector >::type fileNames(fileNamesSEXP);
    Rcpp::traits::input_parameter< int >::type massChannels(massChannelsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numRows(numRowsSEXP);
    Rcpp::traits::input_parameter< String >::type dataType(dataTypeSEXP);
    Rcpp::traits::input_parameter< int >::type cubeSel(cubeSelSEXP);
    rcpp_result_gen = Rcpp::wrap(LoadrMSIDataCube(fileNames, massChannels, numRows, dataType, cubeSel));
    return rcpp_result_gen;
END_RCPP
}
// Smoothing_SavitzkyGolay
NumericVector Smoothing_SavitzkyGolay(NumericVector x, int sgSize);
RcppExport SEXP _rMSIproc_Smoothing_SavitzkyGolay(SEXP xSEXP, SEXP sgSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type sgSize(sgSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(Smoothing_SavitzkyGolay(x, sgSize));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rMSIproc_C_adductAnnotation", (DL_FUNC) &_rMSIproc_C_adductAnnotation, 9},
    {"_rMSIproc_C_isotopeAnnotator", (DL_FUNC) &_rMSIproc_C_isotopeAnnotator, 10},
    {"_rMSIproc_AlignSpectrumToReference", (DL_FUNC) &_rMSIproc_AlignSpectrumToReference, 10},
    {"_rMSIproc_AverageSpectrumC", (DL_FUNC) &_rMSIproc_AverageSpectrumC, 5},
    {"_rMSIproc_FullImageBitDepthReduction", (DL_FUNC) &_rMSIproc_FullImageBitDepthReduction, 6},
    {"_rMSIproc_SpectrumBitDepthReduction", (DL_FUNC) &_rMSIproc_SpectrumBitDepthReduction, 2},
    {"_rMSIproc_FullImageAlign", (DL_FUNC) &_rMSIproc_FullImageAlign, 13},
    {"_rMSIproc_FullImagePeakPicking", (DL_FUNC) &_rMSIproc_FullImagePeakPicking, 13},
    {"_rMSIproc_ReplacePeakMatrixZeros", (DL_FUNC) &_rMSIproc_ReplacePeakMatrixZeros, 8},
    {"_rMSIproc_FullImageSmoothing", (DL_FUNC) &_rMSIproc_FullImageSmoothing, 6},
    {"_rMSIproc_NoiseEstimationFFTCosWin", (DL_FUNC) &_rMSIproc_NoiseEstimationFFTCosWin, 2},
    {"_rMSIproc_NoiseEstimationFFTExpWin", (DL_FUNC) &_rMSIproc_NoiseEstimationFFTExpWin, 2},
    {"_rMSIproc_NoiseEstimationFFTCosWinMat", (DL_FUNC) &_rMSIproc_NoiseEstimationFFTCosWinMat, 2},
    {"_rMSIproc_NoiseEstimationFFTExpWinMat", (DL_FUNC) &_rMSIproc_NoiseEstimationFFTExpWinMat, 2},
    {"_rMSIproc_MergePeakMatricesC", (DL_FUNC) &_rMSIproc_MergePeakMatricesC, 3},
    {"_rMSIproc_LoadPeakMatrixC", (DL_FUNC) &_rMSIproc_LoadPeakMatrixC, 1},
    {"_rMSIproc_StorePeakMatrixC", (DL_FUNC) &_rMSIproc_StorePeakMatrixC, 2},
    {"_rMSIproc_DetectPeaks_C", (DL_FUNC) &_rMSIproc_DetectPeaks_C, 5},
    {"_rMSIproc_TestPeakInterpolation_C", (DL_FUNC) &_rMSIproc_TestPeakInterpolation_C, 7},
    {"_rMSIproc_TestHanningWindow", (DL_FUNC) &_rMSIproc_TestHanningWindow, 3},
    {"_rMSIproc_TestAreaWindow", (DL_FUNC) &_rMSIproc_TestAreaWindow, 3},
    {"_rMSIproc_PrintrMSIObjectInfo", (DL_FUNC) &_rMSIproc_PrintrMSIObjectInfo, 4},
    {"_rMSIproc_LoadrMSIDataCube", (DL_FUNC) &_rMSIproc_LoadrMSIDataCube, 5},
    {"_rMSIproc_Smoothing_SavitzkyGolay", (DL_FUNC) &_rMSIproc_Smoothing_SavitzkyGolay, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_rMSIproc(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
