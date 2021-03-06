/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/DOMHTMLElement.h>

@class NSString, DOMHTMLFormElement, DOMFileList, NSURL;

@interface DOMHTMLInputElement : DOMHTMLElement

@property (copy) NSString * accept; 
@property (copy) NSString * alt; 
@property (assign) BOOL autofocus; 
@property (assign) BOOL defaultChecked; 
@property (assign) BOOL checked; 
@property (assign) BOOL disabled; 
@property (readonly) DOMHTMLFormElement * form; 
@property (retain) DOMFileList * files; 
@property (assign) BOOL indeterminate; 
@property (assign) int maxLength; 
@property (assign) BOOL multiple; 
@property (copy) NSString * name; 
@property (assign) BOOL readOnly; 
@property (copy) NSString * size; 
@property (copy) NSString * src; 
@property (copy) NSString * type; 
@property (copy) NSString * defaultValue; 
@property (copy) NSString * value; 
@property (readonly) BOOL willValidate; 
@property (assign) int selectionStart; 
@property (assign) int selectionEnd; 
@property (copy) NSString * align; 
@property (copy) NSString * useMap; 
@property (copy) NSString * accessKey; 
@property (copy,readonly) NSString * altDisplayString; 
@property (copy,readonly) NSURL * absoluteImageURL; 
-(void)_startAssistingDocumentView:(id)arg1 ;
-(void)_stopAssistingDocumentView:(id)arg1 ;
-(BOOL)_requiresAccessoryView;
-(BOOL)_requiresInputView;
-(BOOL)_supportsAutoFill;
-(BOOL)_supportsAccessoryClear;
-(void)_accessoryClear;
-(id)_textFormElement;
-(BOOL)isAssistedDateType;
-(BOOL)nodeCanBecomeFirstResponder;
-(BOOL)isLikelyToBeginPageLoad;
-(id)text;
-(BOOL)isSecure;
-(long long)keyboardType;
-(BOOL)isEditing;
-(id)textInputTraits;
-(void)setSelectionWithPoint:(CGPoint)arg1 ;
-(BOOL)isTextControl;
-(id)createPeripheral;
-(id)startPosition;
-(id)endPosition;
-(void)_setAutofilled:(BOOL)arg1 ;
-(void)setMax:(id)arg1 ;
-(id)max;
-(BOOL)_isAutofilled;
-(NSString *)accessKey;
-(void)setAccessKey:(NSString *)arg1 ;
-(NSString *)alt;
-(BOOL)autofocus;
-(void)setAutofocus:(BOOL)arg1 ;
-(id)formAction;
-(void)setFormAction:(id)arg1 ;
-(id)formEnctype;
-(void)setFormEnctype:(id)arg1 ;
-(id)formMethod;
-(void)setFormMethod:(id)arg1 ;
-(BOOL)formNoValidate;
-(void)setFormNoValidate:(BOOL)arg1 ;
-(id)formTarget;
-(void)setFormTarget:(id)arg1 ;
-(BOOL)willValidate;
-(id)validationMessage;
-(BOOL)checkValidity;
-(void)setCustomValidity:(id)arg1 ;
-(void)click;
-(id)autocomplete;
-(void)setAutocomplete:(id)arg1 ;
-(void)setAutocorrect:(BOOL)arg1 ;
-(id)autocapitalize;
-(void)setAutocapitalize:(id)arg1 ;
-(NSString *)useMap;
-(void)setUseMap:(NSString *)arg1 ;
-(NSString *)altDisplayString;
-(BOOL)defaultChecked;
-(void)setDefaultChecked:(BOOL)arg1 ;
-(id)dirName;
-(void)setDirName:(id)arg1 ;
-(DOMFileList *)files;
-(void)setFiles:(DOMFileList *)arg1 ;
-(BOOL)indeterminate;
-(BOOL)required;
-(double)valueAsDate;
-(void)setValueAsDate:(double)arg1 ;
-(void)setValueAsNumber:(double)arg1 ;
-(id)selectionDirection;
-(void)setSelectionDirection:(id)arg1 ;
-(BOOL)incremental;
-(void)setIncremental:(BOOL)arg1 ;
-(void)stepUp:(int)arg1 ;
-(void)stepDown:(int)arg1 ;
-(void)select;
-(void)setRangeText:(id)arg1 ;
-(void)setRangeText:(id)arg1 start:(unsigned)arg2 end:(unsigned)arg3 selectionMode:(id)arg4 ;
-(void)setSelectionRange:(int)arg1 end:(int)arg2 ;
-(void)setValueForUser:(id)arg1 ;
-(void)_setAutofilled:(BOOL)arg1 ;
-(NSString *)size;
-(void)setChecked:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setSize:(NSString *)arg1 ;
-(unsigned)width;
-(unsigned)height;
-(void)setMaxLength:(int)arg1 ;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(DOMHTMLFormElement *)form;
-(int)_autocapitalizeType;
-(BOOL)autocorrect;
-(BOOL)_isTextField;
-(NSURL *)absoluteImageURL;
-(void)setPlaceholder:(id)arg1 ;
-(id)placeholder;
-(void)setWidth:(unsigned)arg1 ;
-(BOOL)multiple;
-(BOOL)readOnly;
-(BOOL)_isEdited;
-(int)structuralComplexityContribution;
-(id)labels;
-(NSString *)defaultValue;
-(void)setDefaultValue:(NSString *)arg1 ;
-(void)setIndeterminate:(BOOL)arg1 ;
-(void)setValueWithChangeEvent:(id)arg1 ;
-(id)pattern;
-(BOOL)checked;
-(void)setHeight:(unsigned)arg1 ;
-(void)setValueAsNumberWithChangeEvent:(double)arg1 ;
-(double)valueAsNumber;
-(id)step;
-(void)setStep:(id)arg1 ;
-(void)setAccept:(NSString *)arg1 ;
-(NSString *)src;
-(void)setSrc:(NSString *)arg1 ;
-(void)setAlt:(NSString *)arg1 ;
-(int)maxLength;
-(void)setRequired:(BOOL)arg1 ;
-(NSString *)accept;
-(int)selectionStart;
-(int)selectionEnd;
-(void)setSelectionStart:(int)arg1 ;
-(void)setSelectionEnd:(int)arg1 ;
-(void)setReadOnly:(BOOL)arg1 ;
-(void)setMultiple:(BOOL)arg1 ;
-(void)setAlign:(NSString *)arg1 ;
-(NSString *)align;
-(void)setPattern:(id)arg1 ;
-(id)min;
-(void)setMin:(id)arg1 ;
-(id)validity;
@end

