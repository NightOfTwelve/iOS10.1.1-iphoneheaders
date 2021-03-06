/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SearchUITableLayoutInfo : NSObject {

	NSArray* _columnWidths;
	NSArray* _columnSpacing;
	long long _firstTrailingIndex;
	NSArray* _columnAlignments;

}

@property (retain) NSArray * columnWidths;                    //@synthesize columnWidths=_columnWidths - In the implementation block
@property (retain) NSArray * columnSpacing;                   //@synthesize columnSpacing=_columnSpacing - In the implementation block
@property (assign) long long firstTrailingIndex;              //@synthesize firstTrailingIndex=_firstTrailingIndex - In the implementation block
@property (retain) NSArray * columnAlignments;                //@synthesize columnAlignments=_columnAlignments - In the implementation block
-(NSArray *)columnWidths;
-(void)setColumnWidths:(NSArray *)arg1 ;
-(NSArray *)columnSpacing;
-(void)setFirstTrailingIndex:(long long)arg1 ;
-(long long)firstTrailingIndex;
-(void)setColumnAlignments:(NSArray *)arg1 ;
-(NSArray *)columnAlignments;
-(void)setColumnSpacing:(NSArray *)arg1 ;
@end

