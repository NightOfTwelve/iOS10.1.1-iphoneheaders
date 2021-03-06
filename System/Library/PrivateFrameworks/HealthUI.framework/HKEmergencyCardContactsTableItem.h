/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKEmergencyCardTableItem.h>
#import <libobjc.A.dylib/HKMedicalIDEditorCellEditDelegate.h>
#import <libobjc.A.dylib/_HKEmergencyContactRelationshipPickerDelegate.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>

@class NSMutableArray, UITableViewCell, _HKEmergencyContact, CNContactStoreDataSource, NSString;

@interface HKEmergencyCardContactsTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, _HKEmergencyContactRelationshipPickerDelegate, CNContactPickerDelegate> {

	NSMutableArray* _cells;
	UITableViewCell* _lastDequeuedAddContactCell;
	_HKEmergencyContact* _selectedContact;
	BOOL _selectedContactIsBeingAdded;
	CNContactStoreDataSource* _contactDataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)title;
-(long long)numberOfRows;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(id)meContactIdentifier;
-(BOOL)hasPresentableData;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2 ;
-(BOOL)shouldHighlightRowAtIndex:(long long)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2 ;
-(BOOL)canEditRowAtIndex:(long long)arg1 ;
-(long long)editingStyleForRowAtIndex:(long long)arg1 ;
-(long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(BOOL)refreshFromData;
-(void)medicalIDEditorCellDidChangeValue:(id)arg1 ;
-(void)medicalIDEditorCellDidTapLabel:(id)arg1 ;
-(void)emergencyContactRelationshipPicker:(id)arg1 didChooseRelationshipNamed:(id)arg2 ;
-(void)emergencyContactRelationshipPickerDidCancel:(id)arg1 ;
-(void)_configureAddContactCellLayoutForRowIndex:(long long)arg1 ;
-(id)_dequeueAndConfigureContactEditCellForIndex:(long long)arg1 inTableView:(id)arg2 ;
-(id)_dequeueAndConfigureContactViewCellForIndex:(long long)arg1 ;
-(void)_presentEmergencyContactPicker;
-(void)_addEmergencyContactToData:(id)arg1 ;
-(void)_didSelectContact:(id)arg1 property:(id)arg2 ;
-(id)_emergencyContactWithContact:(id)arg1 property:(id)arg2 ;
@end

