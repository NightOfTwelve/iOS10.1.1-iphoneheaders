/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAIntentGroupSettingSnippetTemplate.h>
#import <Intents/SiriUISelectionTemplateModel.h>

@class NSString;

@interface SAIntentGroupChoiceSettingSnippetTemplate : SAIntentGroupSettingSnippetTemplate <SiriUISelectionTemplateModel>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) BOOL selected; 
@property (nonatomic,retain) id<SAServerBoundCommand> updateSlotCommand; 
+(id)choiceSettingSnippetTemplate;
+(id)choiceSettingSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)intents_serverBoundCommand;
-(Class)templateViewControllerClass;
-(id)commandIdentifier;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id<SAServerBoundCommand>)updateSlotCommand;
-(void)setUpdateSlotCommand:(id<SAServerBoundCommand>)arg1 ;
@end

