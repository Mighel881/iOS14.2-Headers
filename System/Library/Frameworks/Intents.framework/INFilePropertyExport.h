/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, INDateComponentsRange, INPerson, NSNumber;


@protocol INFilePropertyExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * qualifier; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,copy) INDateComponentsRange * dateComponentsRange; 
@property (nonatomic,copy) INPerson * person; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSNumber * quantity; 
@required
-(void)setPerson:(id)arg1;
-(id)init;
-(NSNumber *)quantity;
-(INPerson *)person;
-(void)setType:(id)arg1;
-(NSString *)name;
-(NSString *)type;
-(NSString *)value;
-(NSString *)qualifier;
-(void)setValue:(id)arg1;
-(void)setQualifier:(id)arg1;
-(INDateComponentsRange *)dateComponentsRange;
-(void)setDateComponentsRange:(id)arg1;
-(void)setQuantity:(id)arg1;
-(void)setName:(id)arg1;

@end
