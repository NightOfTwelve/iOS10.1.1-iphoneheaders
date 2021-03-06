/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WDTable, WDTableRowProperties, NSMutableArray;

@interface WDTableRow : NSObject {

	unsigned long long mIndex;
	WDTable* mTable;
	WDTableRowProperties* mProperties;
	NSMutableArray* mCells;

}
-(void)dealloc;
-(id)description;
-(id)table;
-(unsigned long long)index;
-(id)properties;
-(void)setIndex:(unsigned long long)arg1 ;
-(unsigned long long)cellCount;
-(id)cellAt:(unsigned long long)arg1 ;
-(id)addCell;
-(id)initWithTable:(id)arg1 at:(unsigned long long)arg2 ;
-(id)cellIterator;
-(id)newCellIterator;
-(id)addCellWithIndex:(unsigned long long)arg1 ;
@end

