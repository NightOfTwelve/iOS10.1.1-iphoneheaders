/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSString, TSSPropertyMap;

@interface TSCHConfiguration : NSObject {

	BOOL mSupportsChartDataEditor;
	BOOL mSupportsChartRangeEditingMode;
	BOOL mSupportsNumberFormatSameAsSource;
	BOOL mShowMessageOnSelection;
	BOOL mDisableHighQualityRenderingIfNecessary;
	BOOL mSupports3DFillDataEmbeddingRecovery;
	BOOL mUse3DFillFor3DChartFallback;
	BOOL mShouldForceDiscreteGraphicsFor3D;
	BOOL mExportsUsingSageKeynoteChartNonStyleDefaultsOverride;
	BOOL mSupportsTextBackground;
	BOOL mSupportsTextWrapping;
	Class mMultiDataChartOptionsControllerBuildSupportClass;
	NSString* mSaveChartStyleHelpKey;

}

@property (assign,nonatomic) BOOL supportsChartDataEditor; 
@property (assign,nonatomic) BOOL supportsChartRangeEditingMode; 
@property (assign,nonatomic) BOOL supportsNumberFormatSameAsSource; 
@property (assign,nonatomic) BOOL showMessageOnSelection; 
@property (assign,nonatomic) BOOL disableHighQualityRenderingIfNecessary; 
@property (assign,nonatomic) BOOL supports3DFillDataEmbeddingRecovery; 
@property (assign,nonatomic) BOOL use3DFillFor3DChartFallback; 
@property (assign,nonatomic) BOOL shouldForceDiscreteGraphicsFor3D; 
@property (assign,nonatomic) BOOL exportsUsingSageKeynoteChartNonStyleDefaultsOverride; 
@property (assign,nonatomic) BOOL supportsTextBackground; 
@property (assign,nonatomic) BOOL supportsTextWrapping; 
@property (assign,nonatomic) Class multiDataChartOptionsControllerBuildSupportClass; 
@property (nonatomic,copy) NSString * saveChartStyleHelpKey; 
@property (readonly) TSSPropertyMap * appSpecificPropertyOverrides; 
+(void)resetSharedChartConfiguration;
+(id)sharedChartConfiguration;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
-(void)setSupports3DFillDataEmbeddingRecovery:(BOOL)arg1 ;
-(BOOL)use3DFillFor3DChartFallback;
-(BOOL)disableHighQualityRenderingIfNecessary;
-(BOOL)supportsNumberFormatSameAsSource;
-(BOOL)supportsChartRangeEditingMode;
-(TSSPropertyMap *)appSpecificPropertyOverrides;
-(BOOL)supportsTextWrapping;
-(BOOL)supportsChartDataEditor;
-(void)setSupportsChartDataEditor:(BOOL)arg1 ;
-(void)setSupportsChartRangeEditingMode:(BOOL)arg1 ;
-(void)setSupportsNumberFormatSameAsSource:(BOOL)arg1 ;
-(BOOL)showMessageOnSelection;
-(void)setShowMessageOnSelection:(BOOL)arg1 ;
-(void)setDisableHighQualityRenderingIfNecessary:(BOOL)arg1 ;
-(BOOL)supports3DFillDataEmbeddingRecovery;
-(void)setUse3DFillFor3DChartFallback:(BOOL)arg1 ;
-(BOOL)shouldForceDiscreteGraphicsFor3D;
-(void)setShouldForceDiscreteGraphicsFor3D:(BOOL)arg1 ;
-(BOOL)exportsUsingSageKeynoteChartNonStyleDefaultsOverride;
-(void)setExportsUsingSageKeynoteChartNonStyleDefaultsOverride:(BOOL)arg1 ;
-(BOOL)supportsTextBackground;
-(void)setSupportsTextBackground:(BOOL)arg1 ;
-(void)setSupportsTextWrapping:(BOOL)arg1 ;
-(Class)multiDataChartOptionsControllerBuildSupportClass;
-(void)setMultiDataChartOptionsControllerBuildSupportClass:(Class)arg1 ;
-(NSString *)saveChartStyleHelpKey;
-(void)setSaveChartStyleHelpKey:(NSString *)arg1 ;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
