/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:40:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface TIAssetsForInputModeLevel : NSObject {

	NSMutableDictionary* _assetsByType;
	long long _numberOfAssertions;
	NSString* _inputModeLevel;

}

@property (nonatomic,readonly) NSString * inputModeLevel;              //@synthesize inputModeLevel=_inputModeLevel - In the implementation block
-(void)dealloc;
-(BOOL)isEmpty;
-(id)recursiveDescription;
-(void)addAsset:(id)arg1 ;
-(id)assetContentItemsForInputModeLevels:(id)arg1 contentType:(id)arg2 ;
-(void)addAssertion;
-(void)removeAssertion;
-(BOOL)hasAssertions;
-(NSString *)inputModeLevel;
-(void)gatherStatistics:(id)arg1 ;
-(id)purgeableAssets;
-(BOOL)purgeAsset:(id)arg1 ;
-(id)initWithInputModeLevel:(id)arg1 ;
-(id)assetVersionsForType:(id)arg1 ;
-(id)assetForType:(id)arg1 ;
-(void)removeEmptyAssets;
@end
