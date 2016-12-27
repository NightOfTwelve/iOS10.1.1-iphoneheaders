/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface _INPBIntentVocabulary : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _intentSlotVocabularyPolicies;
	NSMutableArray* _intentTypePhrases;

}

@property (nonatomic,retain) NSMutableArray * intentTypePhrases;                         //@synthesize intentTypePhrases=_intentTypePhrases - In the implementation block
@property (nonatomic,retain) NSMutableArray * intentSlotVocabularyPolicies;              //@synthesize intentSlotVocabularyPolicies=_intentSlotVocabularyPolicies - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)intentTypePhrasesType;
+(Class)intentSlotVocabularyPoliciesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)addIntentTypePhrases:(id)arg1 ;
-(void)addIntentSlotVocabularyPolicies:(id)arg1 ;
-(void)clearIntentTypePhrases;
-(unsigned long long)intentTypePhrasesCount;
-(id)intentTypePhrasesAtIndex:(unsigned long long)arg1 ;
-(void)clearIntentSlotVocabularyPolicies;
-(unsigned long long)intentSlotVocabularyPoliciesCount;
-(id)intentSlotVocabularyPoliciesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)intentTypePhrases;
-(void)setIntentTypePhrases:(NSMutableArray *)arg1 ;
-(NSMutableArray *)intentSlotVocabularyPolicies;
-(void)setIntentSlotVocabularyPolicies:(NSMutableArray *)arg1 ;
@end
