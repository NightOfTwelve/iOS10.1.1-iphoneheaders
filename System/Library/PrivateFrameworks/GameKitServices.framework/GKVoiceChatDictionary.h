/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface GKVoiceChatDictionary : NSObject {

	NSMutableDictionary* actualDictionary;
	unsigned long long type;
	unsigned orignalCallID;

}

@property (assign) unsigned callID; 
@property (readonly) unsigned originalCallID; 
@property (assign) long long nonce; 
+(BOOL)validateDictionary:(id)arg1 ;
+(BOOL)validateInvite:(id)arg1 ;
+(BOOL)validateReply:(id)arg1 ;
+(BOOL)validateCancel:(id)arg1 ;
+(BOOL)validateFocus:(id)arg1 ;
+(id)inviteDictionaryToParticipantID:(id)arg1 fromParticipantID:(id)arg2 connectionData:(id)arg3 callID:(unsigned)arg4 focus:(BOOL)arg5 ;
+(id)dictionaryFromData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)response;
-(unsigned long long)type;
-(id)version;
-(id)participantID;
-(void)setCallID:(unsigned)arg1 ;
-(unsigned)callID;
-(BOOL)isFocus;
-(id)fromParticipantID;
-(id)remoteVCPartyID;
-(id)localVCPartyID;
-(BOOL)matchesNonce:(long long)arg1 ;
-(unsigned)originalCallID;
-(id)replyDictionary:(unsigned long long)arg1 connectionData:(id)arg2 callID:(unsigned)arg3 focus:(BOOL)arg4 ;
-(id)cancelDictionary;
-(id)focusDictionary:(BOOL)arg1 ;
-(BOOL)isInviteDictionary;
-(BOOL)isCancelDictionary;
-(BOOL)isReplyDictionary;
-(BOOL)isFocusDictionary;
-(BOOL)matchesResponse:(id)arg1 ;
-(id)connectionData;
-(void)setFromParticipantID:(id)arg1 ;
-(void)setFocus:(BOOL)arg1 ;
-(id)createBlob;
-(id)setLocalVCPartyID:(id)arg1 ;
-(id)setRemoteVCPartyID:(id)arg1 ;
-(long long)nonce;
-(void)setNonce:(long long)arg1 ;
@end
