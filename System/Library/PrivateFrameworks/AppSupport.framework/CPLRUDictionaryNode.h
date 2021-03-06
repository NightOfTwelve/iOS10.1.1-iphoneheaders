/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CPLRUDictionaryNode : NSObject {

	id _key;
	id _object;
	CPLRUDictionaryNode* next;
	CPLRUDictionaryNode* prev;

}

@property (nonatomic,readonly) id key;               //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id object;              //@synthesize object=_object - In the implementation block
-(id)initWithKey:(id)arg1 object:(id)arg2 ;
-(void)dealloc;
-(id)key;
-(id)object;
-(void)setObject:(id)arg1 ;
@end

