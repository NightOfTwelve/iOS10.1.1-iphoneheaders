/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MPActionSupport;
@class NSObject, MCAction;

@interface MPAction : NSObject <NSCoding, NSCopying> {

	NSObject*<MPActionSupport> _parentObject;
	MCAction* _action;
	NSObject* _targetObject;

}

@property (nonatomic,retain) NSObject * targetObject;              //@synthesize targetObject=_targetObject - In the implementation block
+(id)action;
-(NSObject *)targetObject;
-(void)setTargetObject:(NSObject *)arg1 ;
-(void)configureTarget;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(id)arg1 ;
-(id)parent;
-(void)setParent:(id)arg1 ;
-(id)parentDocument;
@end

