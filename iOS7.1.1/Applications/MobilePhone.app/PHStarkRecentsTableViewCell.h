/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/PHStarkGenericTableViewCell.h>

@class UILabel, UIDateLabel, NSLayoutConstraint, UIImageView;

@interface PHStarkRecentsTableViewCell : PHStarkGenericTableViewCell {

	UILabel* _nameLabel;
	UILabel* _phoneNumberTypeLabel;
	UIDateLabel* _dateLabel;
	NSLayoutConstraint* _nameLabelVerticalLayoutConstraint;
	UIImageView* _outgoingCallIconImageView;

}

@property (retain) UILabel * nameLabel;                                                 //@synthesize nameLabel=_nameLabel - In the implementation block
@property (retain) UILabel * phoneNumberTypeLabel;                                      //@synthesize phoneNumberTypeLabel=_phoneNumberTypeLabel - In the implementation block
@property (retain) UIDateLabel * dateLabel;                                             //@synthesize dateLabel=_dateLabel - In the implementation block
@property (retain) NSLayoutConstraint * nameLabelVerticalLayoutConstraint;              //@synthesize nameLabelVerticalLayoutConstraint=_nameLabelVerticalLayoutConstraint - In the implementation block
@property (retain) UIImageView * outgoingCallIconImageView;                             //@synthesize outgoingCallIconImageView=_outgoingCallIconImageView - In the implementation block
-(void)setRepresentedRecentCall:(id)arg1 ;
-(void)setPhoneNumberTypeLabel:(id)arg1 ;
-(id)phoneNumberTypeLabel;
-(void)setNameLabelVerticalLayoutConstraint:(id)arg1 ;
-(id)nameLabelVerticalLayoutConstraint;
-(id)outgoingCallIconImageView;
-(void)setShowsOutgoingCallIcon:(BOOL)arg1 ;
-(void)setOutgoingCallIconImageView:(id)arg1 ;
-(id)nameLabel;
-(void)setNameLabel:(id)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id)dateLabel;
-(void)setDateLabel:(id)arg1 ;
@end
