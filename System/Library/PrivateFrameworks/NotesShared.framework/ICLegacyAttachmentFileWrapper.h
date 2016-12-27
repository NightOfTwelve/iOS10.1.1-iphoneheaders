/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileWrapper.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface ICLegacyAttachmentFileWrapper : NSFileWrapper <NSSecureCoding> {

	NSURL* _cidURL;

}

@property (nonatomic,retain) NSURL * cidURL;                                 //@synthesize cidURL=_cidURL - In the implementation block
@property (nonatomic,readonly) NSString * attachmentIdentifier; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCIDURL:(id)arg1 ;
-(NSString *)attachmentIdentifier;
-(void)setCidURL:(NSURL *)arg1 ;
-(NSURL *)cidURL;
@end
