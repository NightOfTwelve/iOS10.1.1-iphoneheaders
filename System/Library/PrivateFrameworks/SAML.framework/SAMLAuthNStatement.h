/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class NSDate, NSString;

@interface SAMLAuthNStatement : SAMLBaseElement

@property (nonatomic,readonly) NSDate * authnInstant; 
@property (nonatomic,readonly) NSString * sessionIndex; 
@property (nonatomic,readonly) NSDate * sessionNotOnOrAfter; 
@property (nonatomic,readonly) NSString * authnContextClassRef; 
@property (nonatomic,readonly) NSString * authnContextDecl; 
@property (nonatomic,readonly) NSString * authnContextDeclRef; 
@property (nonatomic,readonly) NSString * authenticatingAuthority; 
@property (nonatomic,readonly) NSString * subjectAddress; 
@property (nonatomic,readonly) NSString * subjectDNSName; 
+(id)createElement:(id*)arg1 ;
-(BOOL)isValid;
-(NSDate *)sessionNotOnOrAfter;
-(NSString *)sessionIndex;
-(NSDate *)authnInstant;
-(NSString *)subjectAddress;
-(NSString *)subjectDNSName;
-(NSString *)authnContextDecl;
-(NSString *)authnContextDeclRef;
-(NSString *)authnContextClassRef;
-(NSString *)authenticatingAuthority;
@end

