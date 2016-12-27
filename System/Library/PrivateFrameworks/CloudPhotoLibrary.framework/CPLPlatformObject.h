/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLAbstractObject;
@interface CPLPlatformObject : NSObject {

	id<CPLAbstractObject> _abstractObject;

}

@property (nonatomic,__weak,readonly) id<CPLAbstractObject> abstractObject;              //@synthesize abstractObject=_abstractObject - In the implementation block
-(id)init;
-(id)description;
-(id<CPLAbstractObject>)abstractObject;
-(id)initWithAbstractObject:(id)arg1 ;
@end
