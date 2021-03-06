/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/CNMultiValuePropertyDescription.h>
#import <libobjc.A.dylib/CNAbstractPropertyDescription.h>

@class NSString;

@interface CNDatesDescription : CNMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCNValue:(id)arg1 onContact:(id)arg2 ;
-(BOOL)isNonnull;
-(BOOL)abPropertyID:(int*)arg1 ;
-(id)init;
-(void*)ABMultiValueValueFromCNLabeledValueValue:(id)arg1 ;
-(BOOL)isEqualForContact:(id)arg1 other:(id)arg2 ;
-(BOOL)isValue:(id)arg1 preferredToUnifiedValue:(id)arg2 ;
-(/*^block*/id)fromPlistTransform;
-(Class)labeledValueClass;
-(BOOL)isValidMultiValueValue:(id)arg1 error:(id*)arg2 ;
-(BOOL)canUnifyValue:(id)arg1 withValue:(id)arg2 ;
-(id)CNLabeledValueValueFromABMultiValueValueBytes:(char*)arg1 length:(unsigned long long)arg2 ;
-(id)CNLabeledValueValueFromABMultiValueValue:(void*)arg1 ;
-(id)standardLabels;
-(void)encodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(void)decodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(id)CNValueForContact:(id)arg1 ;
@end

