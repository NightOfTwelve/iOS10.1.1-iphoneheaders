/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PVUserDefaults : NSObject
+(void)initialize;
+(long long)faceClusteringDelay;
+(float)faceClusteringThreshold;
+(float)faceAutonamingThreshold;
+(float)faceRecallThreshold;
+(float)faceMergeFaceprintDistanceThreshold;
+(float)faceMergeFaceOverlapThreshold;
+(float)facePrimarySuggestionsThreshold;
+(long long)minFaceCountToTriggerClustering;
+(long long)maxFaceCountForClustering;
+(long long)faceCountToEnableFacesNamingFlow;
+(long long)faceGroupCountToEnableFacesNamingFlow;
+(BOOL)faceClusteringLogEnabled;
+(BOOL)faceClusteringPerfLogEnabled;
+(int)_intValueForKey:(id)arg1 defaultValue:(int)arg2 ;
+(float)_floatValueForKey:(id)arg1 defaultValue:(float)arg2 ;
+(BOOL)_boolValueForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
+(double)_doubleValueForKey:(id)arg1 defaultValue:(double)arg2 ;
+(BOOL)faceAutonamingEnabled;
@end

