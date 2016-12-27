/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OCDReader, OCDWriter, OCDSummary, OADBlipCollection, NSMutableArray, OADTableStyleCollection, OITSUPointerKeyDictionary, OADTheme, OADTextListStyle, OADGraphicStyleCache, NSData;

@interface OCDDocument : NSObject {

	OCDReader* mReader;
	OCDWriter* mWriter;
	OCDSummary* mSummary;
	OADBlipCollection* mBlips;
	NSMutableArray* mCharts;
	OADTableStyleCollection* mTableStyles;
	OITSUPointerKeyDictionary* mDualDrawableMap;
	OADTheme* mDocumentTheme;
	OADTextListStyle* mDefaultTextStyle;
	OADGraphicStyleCache* mGraphicStyleCache;
	NSData* mEncryptionInfo;

}

@property (nonatomic,retain) OCDReader * reader; 
@property (nonatomic,retain) OCDWriter * writer; 
@property (nonatomic,readonly) OCDSummary * summary; 
@property (nonatomic,readonly) OADBlipCollection * blips; 
@property (nonatomic,readonly) NSMutableArray * charts; 
@property (nonatomic,readonly) OADTableStyleCollection * tableStyles; 
@property (nonatomic,readonly) OITSUPointerKeyDictionary * dualDrawableMap; 
@property (nonatomic,readonly) OADTextListStyle * defaultTextStyle; 
@property (nonatomic,retain) OADGraphicStyleCache * graphicStyleCache; 
-(id)init;
-(void)dealloc;
-(OCDSummary *)summary;
-(id)theme;
-(void)setTheme:(id)arg1 ;
-(OADBlipCollection *)blips;
-(OADTableStyleCollection *)tableStyles;
-(void)removeUnnecessaryOverrides;
-(BOOL)isFromBinaryFile;
-(id)encryptionInfo;
-(void)setEncryptionInfo:(id)arg1 ;
-(void)setUpPropertyHierarchyPreservingEffectiveValues;
-(OCDReader *)reader;
-(void)setReader:(OCDReader *)arg1 ;
-(OCDWriter *)writer;
-(void)setWriter:(OCDWriter *)arg1 ;
-(NSMutableArray *)charts;
-(OITSUPointerKeyDictionary *)dualDrawableMap;
-(OADTextListStyle *)defaultTextStyle;
-(OADGraphicStyleCache *)graphicStyleCache;
-(void)setGraphicStyleCache:(OADGraphicStyleCache *)arg1 ;
@end
