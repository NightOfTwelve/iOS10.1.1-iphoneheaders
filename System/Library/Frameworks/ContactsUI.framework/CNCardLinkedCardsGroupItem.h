/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNCardGroupItem.h>

@class CNContact;

@interface CNCardLinkedCardsGroupItem : CNCardGroupItem {

	CNContact* _contact;

}

@property (nonatomic,retain) CNContact * contact;              //@synthesize contact=_contact - In the implementation block
-(CNContact *)contact;
-(id)initWithContact:(id)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
@end

