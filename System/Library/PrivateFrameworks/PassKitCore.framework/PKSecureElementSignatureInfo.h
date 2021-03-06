/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKSecureElementCertificateSet;

@interface PKSecureElementSignatureInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _sequenceCounter;
	NSString* _platformIdentifier;
	PKSecureElementCertificateSet* _certificates;

}

@property (nonatomic,copy,readonly) NSString * sequenceCounter;                                //@synthesize sequenceCounter=_sequenceCounter - In the implementation block
@property (nonatomic,copy,readonly) NSString * platformIdentifier;                             //@synthesize platformIdentifier=_platformIdentifier - In the implementation block
@property (nonatomic,copy,readonly) PKSecureElementCertificateSet * certificates;              //@synthesize certificates=_certificates - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSignatureInfo:(id)arg1 ;
-(id)initWithSecureElementCertificateSet:(id)arg1 ;
-(NSString *)sequenceCounter;
-(NSString *)platformIdentifier;
-(PKSecureElementCertificateSet *)certificates;
@end

