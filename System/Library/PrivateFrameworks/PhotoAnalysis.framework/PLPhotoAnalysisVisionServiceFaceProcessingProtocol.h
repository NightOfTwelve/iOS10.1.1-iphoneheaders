/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLPhotoAnalysisVisionServiceFaceProcessingProtocol
@required
-(void)scheduleFaceProcessingOnAssetsWithLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)performFaceProcessingOnSRGBImageData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 bitmapInfo:(unsigned)arg5 context:(id)arg6 reply:(/*^block*/id)arg7;
-(void)suggestFacesForFacesWithLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)suggestFacesForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedFaceLocalIdentifiers:(id)arg2 toBeRejectedFaceLocalIdentifiers:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5;
-(void)suggestPersonForFaceWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)resetFaceClusteringStateWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)reclusterFacesWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)faceClusteringInformation:(unsigned long long)arg1 withContext:(id)arg2 reply:(/*^block*/id)arg3;

@end

