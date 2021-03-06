/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMediaQuery;

@interface MusicGeniusIndexedSubQuery : NSObject {

	unsigned long long _index;
	MPMediaQuery* _itemsQuery;

}

@property (nonatomic,readonly) unsigned long long index;               //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) MPMediaQuery * itemsQuery;              //@synthesize itemsQuery=_itemsQuery - In the implementation block
-(unsigned long long)index;
-(MPMediaQuery *)itemsQuery;
-(id)initWithIndex:(unsigned long long)arg1 itemsQuery:(id)arg2 ;
@end

