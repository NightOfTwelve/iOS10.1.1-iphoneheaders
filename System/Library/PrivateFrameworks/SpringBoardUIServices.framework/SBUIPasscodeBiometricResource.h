/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBUIBiometricResource.h>

@protocol SBUIPasscodeBiometricMatchingAssertionFactory;
@class SBUIBiometricResource, NSString;

@interface SBUIPasscodeBiometricResource : NSObject <SBUIBiometricResource> {

	SBUIBiometricResource* _biometricResource;
	id<SBUIPasscodeBiometricMatchingAssertionFactory> _overrideMatchingAssertionFactory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasEnrolledFingers; 
@property (nonatomic,readonly) BOOL hasBiometricAuthenticationCapabilityEnabled; 
@property (getter=isFingerOn,nonatomic,readonly) BOOL fingerOn; 
@property (getter=isFingerDetectEnabled,nonatomic,readonly) BOOL fingerDetectEnabled; 
@property (getter=isMatchingEnabled,nonatomic,readonly) BOOL matchingEnabled; 
@property (getter=isMatchingAllowed,nonatomic,readonly) BOOL matchingAllowed; 
@property (nonatomic,readonly) unsigned long long matchMode; 
@property (nonatomic,readonly) unsigned long long biometricLockoutState; 
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isFingerOn;
-(id)acquireMatchingAssertionWithMode:(unsigned long long)arg1 reason:(id)arg2 ;
-(unsigned long long)biometricLockoutState;
-(BOOL)hasBiometricAuthenticationCapabilityEnabled;
-(BOOL)isMatchingEnabled;
-(id)initWithBiometricResource:(id)arg1 overrideMatchingAssertionFactory:(id)arg2 ;
-(BOOL)hasEnrolledFingers;
-(BOOL)isFingerDetectEnabled;
-(BOOL)isMatchingAllowed;
-(unsigned long long)matchMode;
-(id)acquireFingerDetectionWantedAssertionForReason:(id)arg1 ;
-(void)refreshMatchMode;
@end
