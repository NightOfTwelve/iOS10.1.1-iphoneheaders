/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSArray;

@interface UAPasteboardGeneration : NSObject {

	unsigned long long _generation;
	NSSet* _allTypes;
	NSArray* _items;

}

@property (nonatomic,copy) NSSet * allTypes;                               //@synthesize allTypes=_allTypes - In the implementation block
@property (nonatomic,copy) NSArray * items;                                //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) unsigned long long generation;              //@synthesize generation=_generation - In the implementation block
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(BOOL)addItem:(id)arg1 ;
-(BOOL)addType:(id)arg1 toItemAtIndex:(unsigned long long)arg2 ;
-(id)initWithGeneration:(unsigned long long)arg1 ;
-(NSSet *)allTypes;
-(void)setAllTypes:(NSSet *)arg1 ;
-(unsigned long long)generation;
@end

