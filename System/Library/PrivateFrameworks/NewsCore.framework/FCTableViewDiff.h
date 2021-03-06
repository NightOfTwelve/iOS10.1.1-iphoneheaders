/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSIndexSet, NSDictionary, NSArray;

@interface FCTableViewDiff : NSObject <NSCopying> {

	NSIndexSet* _insertedSections;
	NSIndexSet* _deletedSections;
	NSDictionary* _movedSections;
	NSArray* _insertedRows;
	NSArray* _deletedRows;
	NSDictionary* _movedRows;
	NSArray* _updatedRows;

}

@property (nonatomic,copy) NSIndexSet * insertedSections;              //@synthesize insertedSections=_insertedSections - In the implementation block
@property (nonatomic,copy) NSIndexSet * deletedSections;               //@synthesize deletedSections=_deletedSections - In the implementation block
@property (nonatomic,copy) NSDictionary * movedSections;               //@synthesize movedSections=_movedSections - In the implementation block
@property (nonatomic,copy) NSArray * insertedRows;                     //@synthesize insertedRows=_insertedRows - In the implementation block
@property (nonatomic,copy) NSArray * deletedRows;                      //@synthesize deletedRows=_deletedRows - In the implementation block
@property (nonatomic,copy) NSDictionary * movedRows;                   //@synthesize movedRows=_movedRows - In the implementation block
@property (nonatomic,copy) NSArray * updatedRows;                      //@synthesize updatedRows=_updatedRows - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)setInsertedSections:(NSIndexSet *)arg1 ;
-(void)setDeletedSections:(NSIndexSet *)arg1 ;
-(NSIndexSet *)deletedSections;
-(NSIndexSet *)insertedSections;
-(void)applyToTableView:(id)arg1 withDataUpdateBlock:(/*^block*/id)arg2 ;
-(NSDictionary *)movedSections;
-(NSArray *)insertedRows;
-(NSArray *)deletedRows;
-(NSDictionary *)movedRows;
-(NSArray *)updatedRows;
-(id)initWithInsertedSections:(id)arg1 deletedSections:(id)arg2 movedSections:(id)arg3 insertedRows:(id)arg4 deletedRows:(id)arg5 movedRows:(id)arg6 updatedRows:(id)arg7 ;
-(void)setMovedSections:(NSDictionary *)arg1 ;
-(void)setInsertedRows:(NSArray *)arg1 ;
-(void)setDeletedRows:(NSArray *)arg1 ;
-(void)setMovedRows:(NSDictionary *)arg1 ;
-(void)setUpdatedRows:(NSArray *)arg1 ;
@end

