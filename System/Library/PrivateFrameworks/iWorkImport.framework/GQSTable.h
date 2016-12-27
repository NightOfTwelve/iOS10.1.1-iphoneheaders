/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GQDTTable, GQDTOverlapCell, GQDTCell;

@interface GQSTable : NSObject {

	GQDTTable* mTable;
	GQDTOverlapCell* mCurrentOverlapCell;
	GQDTCell* mLastCellRead;
	BOOL mIsStreaming;
	BOOL mAlwaysPutReadCellsInArray;
	long long mCellCount;
	BOOL mIsCounting;

}
-(void)skipCells:(long long)arg1 ;
-(void)incrementCellPosition;
-(BOOL)isCounting;
-(id)currentOverlapCell;
-(void)setCurrentOverlapCell:(id)arg1 ;
-(void)setAlwaysPutReadCellsInArray:(BOOL)arg1 ;
-(void)setIsCountingCount:(BOOL)arg1 ;
-(id)lastCellRead;
-(id)initWithStreaming:(BOOL)arg1 table:(id)arg2 ;
-(BOOL)alwaysPutReadCellsInArray;
-(void)setLastCellRead:(id)arg1 ;
-(void)dealloc;
-(long long)row;
-(id)table;
-(BOOL)isStreaming;
-(long long)column;
@end
