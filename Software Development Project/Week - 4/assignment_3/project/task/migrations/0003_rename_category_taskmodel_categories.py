# Generated by Django 5.1 on 2024-09-29 07:47

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('task', '0002_taskmodel_category'),
    ]

    operations = [
        migrations.RenameField(
            model_name='taskmodel',
            old_name='category',
            new_name='categories',
        ),
    ]
