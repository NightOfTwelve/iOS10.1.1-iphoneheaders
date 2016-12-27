/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSProcessIdentity.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/FBSProcess.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, BSMachPortTaskNameRight, BSAuditToken;

@interface FBSProcessHandle : NSObject <FBSProcessIdentity, BSDescriptionProviding, FBSProcess, BSXPCCoding, NSSecureCoding> {

	int _pid;
	NSString* _name;
	NSString* _bundleID;
	NSString* _jobLabel;
	BSMachPortTaskNameRight* _taskNameRight;
	BSAuditToken* _auditToken;
	long long _type;

}

@property (nonatomic,copy) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * jobLabel;                                             //@synthesize jobLabel=_jobLabel - In the implementation block
@property (assign,nonatomic) long long type;                                                //@synthesize type=_type - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,retain,readonly) BSAuditToken * auditToken;                            //@synthesize auditToken=_auditToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int pid;                                                     //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                            //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain,readonly) FBSProcessHandle * handle; 
@property (nonatomic,retain,readonly) BSMachPortTaskNameRight * taskNameRight;              //@synthesize taskNameRight=_taskNameRight - In the implementation block
+(id)processHandleForNSXPCConnection:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)processHandleForAuditToken:(id)arg1 ;
+(id)processHandle;
+(id)processHandleForXPCConnection:(id)arg1 ;
+(id)processHandleForPID:(int)arg1 bundleID:(id)arg2 ;
-(id)initWithPID:(int)arg1 bundleID:(id)arg2 ;
-(id)initWithCurrentProcess;
-(id)_initWithPID:(int)arg1 bundleID:(id)arg2 ;
-(BOOL)_currentProcess;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(BOOL)isValid;
-(BOOL)isRunning;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(BSAuditToken *)auditToken;
-(BOOL)hasEntitlement:(id)arg1 ;
-(FBSProcessHandle *)handle;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)jobLabel;
-(BSMachPortTaskNameRight *)taskNameRight;
-(void)setJobLabel:(NSString *)arg1 ;
-(id)initWithAuditToken:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(int)pid;
-(id)valueForEntitlement:(id)arg1 ;
@end
