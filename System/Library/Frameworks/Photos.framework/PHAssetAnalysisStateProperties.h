/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetPropertySet.h>

@class NSMutableDictionary;

@interface PHAssetAnalysisStateProperties : PHAssetPropertySet {

	NSMutableDictionary* _fetchDictionariesByWorkerType;

}

@property (nonatomic,readonly) NSMutableDictionary * fetchDictionariesByWorkerType;              //@synthesize fetchDictionariesByWorkerType=_fetchDictionariesByWorkerType - In the implementation block
+(id)propertiesToFetch;
+(BOOL)isToMany;
+(id)keyPathToPrimaryObject;
+(id)propertySetName;
+(id)keyPathFromPrimaryObject;
+(id)entityName;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(int)analysisStateForWorkerType:(short)arg1 outLastIgnoreDate:(id*)arg2 outIgnoreUntilDate:(id*)arg3 ;
-(NSMutableDictionary *)fetchDictionariesByWorkerType;
@end
